#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofVec2f meio = ofVec2f(ofGetWidth() / 2.0f, ofGetHeight() / 2.0f);
	teste = MyButton("Testando", MyButton::FONT_LEFT, 3, false, meio, 100, 50);
	teste.SetSprite("1.png", "2.png");
	teste.SetFontColor(30, 30, 30, 255);
	
	intTeste = IntTextBox("Int Text Box", MyButton::FONT_LEFT, 10,meio + ofVec2f(0, 50), 545, ofColor(255, 255, 255), ofColor(245, 245, 245), ofColor(0, 0, 0));
	intTeste.SetSize(100, 50);
}

//--------------------------------------------------------------
void ofApp::update(){
	teste.Update();
	intTeste.Update();
	std::cout << intTeste.GetValue() << std::endl;
}

//--------------------------------------------------------------
void ofApp::draw(){
	teste.Draw();
	intTeste.Draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	//std::cout << ofGetWidth() / 2.0f << "  " << ofGetHeight() / 2.0f << " -> " <<  x << "  " << y << std::endl;
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
